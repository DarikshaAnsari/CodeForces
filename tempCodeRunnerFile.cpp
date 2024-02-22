
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> nge(n);
    nge = nextGreaterElement(v);
      for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    vector<int> nme(n);