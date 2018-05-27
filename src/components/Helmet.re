[@bs.module "react-helmet"]
external helmet : ReasonReact.reactClass = "Helmet";

[@bs.deriving abstract]
type metaField = {
  name: string,
  content: string
};

let make = (~title: option(string)=?, ~meta: option(array(metaField))=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=helmet,
    ~props={
      "title": Js.Nullable.fromOption(title),
      "meta": Js.Nullable.fromOption(meta)
    },
    children
  );