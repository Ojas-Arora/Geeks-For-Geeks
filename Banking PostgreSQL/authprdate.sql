SELECT author.authorName,articles.articleName,articles.articleContent
FROM author,articles
WHERE author.authorID=articles.authorID;

SELECT authorName 
from author 
where authorName LIKE 'R%';