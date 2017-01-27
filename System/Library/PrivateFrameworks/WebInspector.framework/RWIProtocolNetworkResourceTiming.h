/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolNetworkResourceTiming : RWIProtocolJSONObject

@property (assign,nonatomic) double navigationStart; 
@property (assign,nonatomic) double domainLookupStart; 
@property (assign,nonatomic) double domainLookupEnd; 
@property (assign,nonatomic) double connectStart; 
@property (assign,nonatomic) double connectEnd; 
@property (assign,nonatomic) double secureConnectionStart; 
@property (assign,nonatomic) double requestStart; 
@property (assign,nonatomic) double responseStart; 
-(void)setDomainLookupStart:(double)arg1 ;
-(void)setDomainLookupEnd:(double)arg1 ;
-(void)setConnectStart:(double)arg1 ;
-(void)setSecureConnectionStart:(double)arg1 ;
-(void)setConnectEnd:(double)arg1 ;
-(void)setRequestStart:(double)arg1 ;
-(void)setResponseStart:(double)arg1 ;
-(double)domainLookupStart;
-(double)domainLookupEnd;
-(double)connectStart;
-(double)secureConnectionStart;
-(double)connectEnd;
-(double)requestStart;
-(double)responseStart;
-(void)setNavigationStart:(double)arg1 ;
-(id)initWithNavigationStart:(double)arg1 domainLookupStart:(double)arg2 domainLookupEnd:(double)arg3 connectStart:(double)arg4 connectEnd:(double)arg5 secureConnectionStart:(double)arg6 requestStart:(double)arg7 responseStart:(double)arg8 ;
-(double)navigationStart;
@end

