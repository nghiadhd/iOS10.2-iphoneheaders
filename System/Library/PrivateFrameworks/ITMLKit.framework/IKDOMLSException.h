/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKDOMLSException.h>

@protocol IKDOMLSException <JSExport>
@property (assign,nonatomic) long long code; 
@required
-(long long)code;
-(void)setCode:(long long)arg1;

@end


@interface IKDOMLSException : IKJSObject <IKDOMLSException> {

	long long code;

}

@property (assign,nonatomic) long long code; 
+(id)exceptionWithAppContext:(id)arg1 code:(long long)arg2 ;
-(long long)code;
-(void)setCode:(long long)arg1 ;
@end

