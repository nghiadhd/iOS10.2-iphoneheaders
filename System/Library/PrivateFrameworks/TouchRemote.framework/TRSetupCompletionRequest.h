/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRRequestMessage.h>

@interface TRSetupCompletionRequest : TRRequestMessage {

	BOOL _completedSuccessfully;
	long long _errorCode;

}

@property (assign,nonatomic) BOOL completedSuccessfully;              //@synthesize completedSuccessfully=_completedSuccessfully - In the implementation block
@property (assign,nonatomic) long long errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(void)setCompletedSuccessfully:(BOOL)arg1 ;
-(BOOL)completedSuccessfully;
@end

