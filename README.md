# gatsby-starter-reason

A Gatsby starter for writing your site in ReasonML

## Installation

Installation using the [gatsby cli](https://www.npmjs.com/package/gatsby-cli)

```
gatsby new my-reasonml-site https://github.com/jtberglund/gatsby-starter-reason
```

## Usage

Check the docs for [gatsby-plugin-reason](https://github.com/jtberglund/gatsby-plugin-reason) for more details on configuration options.

### Pages

`gatsby-plugin-reason` offers an option to derive page routes from the page component's name (instead of the file name like gatsby usually uses), which is in use in this starter (see the plugin configuration in [gatsby-config.js](https://github.com/jtberglund/gatsby-starter-reason/blob/master/gatsby-config.js)).

I prefer using this option for two reasons:

1.  ReasonML/ocaml has fairly strict rules for files names since file names automatically map to module names, meaning file names for page components such as `about-me.re` or `404.re` are not allowing.
2.  I like to uppercase my component names and I don't like having two naming conventions going on at once (e.g. having `src/components/Header.re` alongside `src/pages/my_page.re`).

This allows you to create a page component called `AboutMe.re` and map it to the route `/about-me` by setting the name of your component to `"about-me"` as shown below:

```ocaml
let component = ReasonReact.statelessComponent("about-me");
```

### GraphQL

WIP

## Troubleshooting

If there are issues compiling your ReasonML code and you're sure its not a syntax error, often re-compiling will fix the error

```
bsb -clean-world
bsb -make-world
```
