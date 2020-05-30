/*
    FIXME: {{op_type}} currently not supported, you have to fill up this section or it won't compile

    Input Tensors:
    {%for tensor in input_tensors%}
        {{tensor.name}}, of type {{tensor.dtype}}
    {%endfor%}

    Output Tensors:
    {%for tensor, var_name in zip(output_tensors, out_var_names)%}
        {{tensor.name}} is of type {{tensor.dtype}} and should be named as {{var_name}}
        {%if quant_params_map[tensor.name]%}
            quantization parameters:
            - zero point: {{quant_params_map[tensor.name]["zero_point"]["value"]}}, {{quant_params_map[tensor.name]["zero_point"]["type_str"]}}
            - scale: {{quant_params_map[tensor.name]["scale"]["value"]}}, {{quant_params_map[tensor.name]["scale"]["type_str"]}}
            - is per tensor quantization: {{quant_params_map[tensor.name]["is_per_tensor"]}}
        {%endif%}
    {%endfor%}
    */