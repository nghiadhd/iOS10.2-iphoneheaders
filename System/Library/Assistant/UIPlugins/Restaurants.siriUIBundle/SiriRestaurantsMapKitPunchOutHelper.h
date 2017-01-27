/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MKMapItem, NSString;

@interface SiriRestaurantsMapKitPunchOutHelper : NSObject {

	MKMapItem* _mapItem;

}

@property (nonatomic,copy,readonly) NSString * providerName; 
-(BOOL)_performPunchOutForUrls:(id)arg1 attributionApps:(id)arg2 refId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)performMapKitPunchOutOfType:(unsigned long long)arg1 withItemId:(id)arg2 refId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSString *)providerName;
-(id)initWithPlaceData:(id)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
@end

