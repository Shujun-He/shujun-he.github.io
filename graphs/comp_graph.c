digraph G {
	graph [fontsize=16];
	rankdir="LR";
	a1 [label=Input];
	a2 [label="Matmul\noutput"];
	a3 [label="Hidden\nstate"];
	a4 [label="Matmul\noutput"];
	a5 [label=Output];
	a1 -> a2 [label="Fully\nconnected"];
	a2 -> a3 [label="ReLU\nactivation"];
	a3 -> a4 [label="Fully\nconnected"];
	a4 -> a5 [label="Softmax\nactivation"];
}
