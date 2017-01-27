/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface _WKAutomationSession : NSObject <WKObject> {

	ObjectStorage<WebKit::WebAutomationSession> _session;
	WeakObjCPtr<id<_WKAutomationSessionDelegate> > _delegate;

}

@property (nonatomic,copy) NSString * sessionIdentifier; 
@property (assign,nonatomic,__weak) id<_WKAutomationSessionDelegate> delegate; 
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(id)init;
-(void)setDelegate:(id<_WKAutomationSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<_WKAutomationSessionDelegate>)delegate;
-(NSString *)sessionIdentifier;
-(Object*)_apiObject;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(BOOL)isPaired;
@end

