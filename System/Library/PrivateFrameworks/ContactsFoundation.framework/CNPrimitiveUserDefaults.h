/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNPrimitiveUserDefaults <NSObject>
@required
-(BOOL)synchronize;
-(id)primitiveObjectForKey:(id)arg1;
-(void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
-(long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(BOOL*)arg2;
-(BOOL)primitiveBoolValueForKey:(id)arg1 keyExists:(BOOL*)arg2;
-(void)primitiveRemoveObjectForKey:(id)arg1;
-(void)setupAutosync;

@end

