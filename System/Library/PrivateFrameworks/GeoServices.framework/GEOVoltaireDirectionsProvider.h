/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEODirectionsProvider.h>
#import <libobjc.A.dylib/GEOPBSessionRequesterDelegate.h>

@class GEORequester, NSString;

@interface GEOVoltaireDirectionsProvider : GEODirectionsProvider <GEOPBSessionRequesterDelegate> {

	GEORequester* _requester;
	BOOL _cancelled;

}

@property (nonatomic,retain) GEORequester * requester;              //@synthesize requester=_requester - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)startProviderWithRequest:(id)arg1 ;
-(void)cancelProviderRequest;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cleanupRequester;
-(GEORequester *)requester;
-(void)setRequester:(GEORequester *)arg1 ;
@end

