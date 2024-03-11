void printInorder(struct Node* node)
{
if (node == NULL)
return;
printInorder(node-&gt;left);
cout &lt;&lt; node-&gt;data &lt;&lt; &quot; &quot;;
printInorder(node-&gt;right);
}
void printPreorder(struct Node* node)
{
if (node == NULL)
return;
cout &lt;&lt; node-&gt;data &lt;&lt; &quot; &quot;;
printPreorder(node-&gt;left);
printPreorder(node-&gt;right);
}
void printPostorder(struct Node* node)
{
if (node == NULL)
return;
printPostorder(node-&gt;left);
printPostorder(node-&gt;right);
cout &lt;&lt; node-&gt;data &lt;&lt; &quot; &quot;;
}
