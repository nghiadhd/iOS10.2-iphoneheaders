/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/EditScript.framework/EditScript
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ESEditScriptData <NSObject>
@required
+(id)EditScriptDataWithArray:(id)arg1;
+(id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2;
-(long long)length;
-(id)stringValue;
-(long long)lengthOfItem:(long long)arg1;
-(long long)characterIndexForItem:(long long)arg1;
-(id)stringAtIndex:(long long)arg1;
-(long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2 fallsOnWordBoundary:(BOOL*)arg3;

@end
