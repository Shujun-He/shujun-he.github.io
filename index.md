---
layout: default
---

![](/images/welcome_to_my_world.jpg)

*The simplest picture one can form about the creation of an emperical science is along the lines of an inductive method.
Individual facts are selected and grouped together so that the laws that connect them become apparent...However, the big advances
in scientific knowledge originated in this way only to a small degree...The truly great advances in our understanding of nature originated
in a way almost diametrically opposed to induction. The intuitive grasp of the essentials of a large complex of fatcs leads the scientist
to the postulation of a hypothetical basic law or laws. From these laws, he derives his conclusions.*

-Albert Einstein

**This is my personal website, where I blog about stuff involving programming and deep learning, my personal insights on the world, and my life experiences.**


# Check out my recent blog posts

<div class="posts">
  {% for post in site.posts limit:2%}
    <article class="post">

      <h2><a href="{{ site.baseurl }}{{ post.url }}">{{ post.title }}</a></h2>

      <div class="entry">
        {{ post.excerpt }}
      </div>

      <a href="{{ site.baseurl }}{{ post.url }}" class="read-more">Read More</a>
    </article>
  {% endfor %}
</div>

<h3><a href="\blog" class="read-more">Like what you see? Click here for more posts...</a><h3>