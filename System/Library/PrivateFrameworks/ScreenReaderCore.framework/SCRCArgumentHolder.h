/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCRCArgumentHolderPrivate;

@interface SCRCArgumentHolder : NSObject {

	SCRCArgumentHolderPrivate* _private;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(SEL)action;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(id)option;
-(id)argumentDescription;
-(void)setArgumentDescription:(id)arg1 ;
-(void)setIsRequired:(BOOL)arg1 ;
-(BOOL)isRequired;
-(id)argument;
-(void)setArgument:(id)arg1 ;
-(void)setOption:(id)arg1 ;
-(BOOL)process;
@end

