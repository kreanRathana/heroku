<template>
<div class="container">
  <h1>wellcome</h1><br>
  <hr>
  
  <input type="text" id="create-post" class="input" v-model="text" placeholder="Enter new data ....">
  <br>
  <button @click="createPost" class="insert">Insert</button>
  
  <p>Double click or click the button delete to delete your data!!!</p>
  <p class="error" v-if="error">{{error}}</p> 
  <div class="posts-container">
      <div class="post"
        v-for="(post,index) in posts"
        v-bind:item="post"
        v-bind:index="index"
        v-bind:key="post._id"
        v-on:dblclick="deletePost(post._id)"
      >
          <button class="deletebutton" @click="deletePost(post._id)">Delete</button>
          <p class="text"> {{post.task}}</p>
      </div>
  </div>
</div>
</template>

<script>
import PostService from '../PostService';
export default {
  name: 'PostComponent', 
  data() {
    return {
      posts:[],
      error:"",
      text:""
    }
  },
  async created ()
  {
    try{
      this.posts = await PostService.getPosts();
    }
    catch(err)
    {
      this.error = err.message;
    }
  }
  , methods: {
    async createPost(){
      await PostService.insertPost(this.text);
      this.posts = await PostService.getPosts();
    },
    async deletePost(id){
      await PostService.deletePost(id);
      this.posts = await PostService.getPosts();
    }
  },
}
</script>

<!-- Add "scoped" attribute to limit CSS to this component only -->
<style scoped>
div.container {
  max-width: 800px;
  margin: 0 auto;
}

p.error {
  border: 1px solid #ff5b5f;
  background-color: #ffc5c1;
  padding:  10px;
  margin-bottom: 15px;
}

div.post {
  position: relative;
  border: 1px solid #5bd658;
  background-color:  #bcffb8;
  padding: 10px 10px 30px 10px;
  margin-bottom: 15px;
}

div.created-at {
  position: absolute;
  top: 0;
  left: 0;
  padding: 5px 15px 5px 15px;
  background-color: darkgreen;
  color: white;
  font-size: 13px;
}

p.text {
  font-size: 22px;
  font-weight: 700;
  margin-bottom: 0;
  
}
.deletebutton{
  position: relative;
  top:-10px;
  left: 48%;
  background-color: #ff5b5f;
}
.input{
  width: 40%;
  height: 50px;
  border-radius: 20px;
}
.insert{
  position: relative;
  margin-bottom: 20px;
  margin-top: 20px;
  font-size: 25px;
  background-color: cyan;
  border : 0px;
}
</style>
