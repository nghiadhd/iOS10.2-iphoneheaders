/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CoreThemeConstantEnumerator : NSObject {

	void* _globalListPointer;
	long long _listIndex;
	long long _indexOfLastEntry;
	BOOL _isPastLastEntry;

}
+(id)enumeratorForGlobalListAtAddress:(void*)arg1 ;
-(id)initWithGlobalListAtAddress:(void*)arg1 ;
-(id)nextConstantHelper;
-(void)_moveToIndexOfLastEntry;
-(id)currentConstantHelper;
-(long long)constantCount;
-(id)previousConstantHelper;
-(id)firstConstantHelper;
-(id)lastConstantHelper;
@end

