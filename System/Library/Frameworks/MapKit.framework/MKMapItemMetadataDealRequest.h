/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKMapItemMetadataRequest.h>

@interface MKMapItemMetadataDealRequest : MKMapItemMetadataRequest {

	/*^block*/id _dealHandler;

}

@property (nonatomic,copy) id dealHandler;              //@synthesize dealHandler=_dealHandler - In the implementation block
+(id)requestWithMapItem:(id)arg1 ;
-(id)url;
-(void)handleError:(id)arg1 ;
-(id)urlRequest;
-(void)handleData:(id)arg1 ;
-(id)dealHandler;
-(void)setDealHandler:(id)arg1 ;
@end

