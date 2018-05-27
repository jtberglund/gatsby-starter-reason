[@bs.module "react-helmet"]
external helmet : ReasonReact.reactClass = "Helmet";

let make = (~title: option(string)=?, ~meta=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=helmet,
    ~props={
      "title": Js.Nullable.fromOption(title),
      "meta": Js.Nullable.fromOption(meta)
    },
    children
  );