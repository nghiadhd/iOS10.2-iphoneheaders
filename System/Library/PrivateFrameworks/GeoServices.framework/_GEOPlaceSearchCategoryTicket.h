/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapServiceCategoriesTicket.h>

@class GEOMapServiceTraits, NSDictionary, GEOPDPlaceRequest, GEOPDPlaceResponse, NSString;

@interface _GEOPlaceSearchCategoryTicket : NSObject <GEOMapServiceCategoriesTicket> {

	GEOPDPlaceRequest* _request;
	GEOPDPlaceResponse* _response;
	NSDictionary* _userInfo;
	GEOMapServiceTraits* _traits;
	BOOL _canceled;

}

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled;              //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                 //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
-(void)cancel;
-(void)dealloc;
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(NSDictionary *)responseUserInfo;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
-(BOOL)isCanceled;
@end

