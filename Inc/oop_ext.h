/* The excellent code in this file is by TurboFerret, from his TurboTemplate */

#ifndef OOP_EXT
#define OOP_EXT

inline LPCONDITION * getConditions() {
	LPCONDITION * c=new LPCONDITION[Conditions.size()+1];
	vector<ExtFunction *>::iterator it=Conditions.begin();
	size_t i=0;
	while(it!=Conditions.end()) {
		c[i]=(*it)->getCondition();
		++i;
		++it;
	}
	c[Conditions.size()]=0;
	return c;
}

inline LPACTION * getActions() {
	LPACTION * a=new LPACTION[Actions.size()+1];
	vector<ExtFunction *>::iterator it=Actions.begin();
	size_t i=0;
	while(it!=Actions.end()) {
		a[i]=(*it)->getAction();
		++i;
		++it;
	}
	a[Actions.size()]=0;
	return a;
}

inline LPEXPRESSION * getExpressions() {
	LPEXPRESSION * e=new LPEXPRESSION[Expressions.size()+1];
	vector<ExtFunction *>::iterator it=Expressions.begin();
	size_t i=0;
	while(it!=Expressions.end()) {
		e[i]=(*it)->getExpression();
		++i;
		++it;
	}
	e[Expressions.size()]=0;
	return e;
}

inline short* getConditionInfos() {
	vector<short> infos;
	size_t i=0;
	vector<ExtFunction *>::iterator it=Conditions.begin();
	while(it!=Conditions.end()) {
		infos.push_back(CONDITION_ID(i));
		infos.push_back(CONDITION_ID(i));
		infos.push_back(i);
		infos.push_back((*it)->getFlags());
		infos.push_back((*it)->getParamCount());
		size_t pi;
		for(pi=0;pi<(*it)->getParamCount();pi++)
			infos.push_back((*it)->getParamType(pi));
		for(pi=0;pi<(*it)->getParamCount();pi++)
			infos.push_back(CONDITION_ID(i)+1+pi);
		++i;
		++it;
	}
	short *ret = new short[infos.size()];
	for(i=0;i<infos.size();i++)
		ret[i]=infos[i];
	return ret;
}

inline short* getActionInfos() {
	vector<short> infos;
	size_t i=0;
	vector<ExtFunction *>::iterator it=Actions.begin();
	while(it!=Actions.end()) {
		infos.push_back(ACTION_ID(i));
		infos.push_back(ACTION_ID(i));
		infos.push_back(i);
		infos.push_back((*it)->getFlags());
		infos.push_back((*it)->getParamCount());
		size_t pi;
		for(pi=0;pi<(*it)->getParamCount();pi++)
			infos.push_back((*it)->getParamType(pi));
		for(pi=0;pi<(*it)->getParamCount();pi++)
			infos.push_back(ACTION_ID(i)+1+pi);
		++i;
		++it;
	}
	short *ret = new short[infos.size()];
	for(i=0;i<infos.size();i++)
		ret[i]=infos[i];
	return ret;
}

inline short* getExpressionInfos() {
	vector<short> infos;
	size_t i=0;
	vector<ExtFunction *>::iterator it=Expressions.begin();
	while(it!=Expressions.end()) {
		infos.push_back(EXPRESSION_ID(i));
		infos.push_back(EXPRESSION_ID(i));
		infos.push_back(i);
		infos.push_back((*it)->getFlags());
		infos.push_back((*it)->getParamCount());
		size_t pi;
		for(pi=0;pi<(*it)->getParamCount();pi++)
			infos.push_back((*it)->getParamType(pi));
		for(pi=0;pi<(*it)->getParamCount();pi++)
			infos.push_back(0);
		++i;
		++it;
	}
	short *ret = new short[infos.size()];
	for(i=0;i<infos.size();i++)
		ret[i]=infos[i];
	return ret;
}

#endif // !OOP_EXT