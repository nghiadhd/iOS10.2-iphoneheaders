/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSResetServerProtocolDelegate.h>

@class NSString, MSResetServerProtocol, MSMediaStreamDaemon;

@interface MSResetServer : NSObject <MSResetServerProtocolDelegate> {

	NSString* _personID;
	MSResetServerProtocol* _protocol;
	MSMediaStreamDaemon* _daemon;
	id _selfReference;

}

@property (nonatomic,readonly) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) MSMediaStreamDaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resetServerObjectWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(NSString *)personID;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)resetServerProtocol:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)resetServerProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(void)resetServer;
-(MSMediaStreamDaemon *)daemon;
-(void)setDaemon:(MSMediaStreamDaemon *)arg1 ;
@end

