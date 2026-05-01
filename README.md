# BGP Attack Project

Final project for CS 6501 (Network Security and Privacy)

# Data
The data can be found either on [Box](https://virginia.box.com/s/iopub0m8k63gat60ba82lzdpdv4te3i1) or by running 
``` 
python isolate_bgp_data.py
```

# Lean4 Usage

First, install `lean4` and `lake`. Then run the following command from the root of the repo.

```
cd ./lean-detector/ && lake build
```

For other directories containing executable Lean code, use the following:

```
cd ./<dir> && lake cache get && lake exe <detector-name> <rib-dir> <ripe-dir>
```

# Explanation of Structure

The directories containing executable Lean code are as follows:
```
./outputs_aristotle <- pipeline 3 + aristotle
./lean-detector_aristotle <- pipeline 1 with aristotle
./lean-detector <- our baseline lean detector
```

The directories containing defunct code are as follows:
```
./outputs
```

The agents are in the following directories:
```
./python_prompts <- pipeline 1 with Mistral
./lean_prompts <- pipeline 1 with Leanstral
./collab_prompts <- pipeline 2 (Mistral + Leanstral) 
./code_assist <- pipeline 3
```

You can find the Python detector in `./bgp_finalproject_hijackDetector.py`.
