/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISPropertyListProvider, NSDictionary;

@interface ISProcessPropertyListOperation : ISOperation {

	ISPropertyListProvider* _dataProvider;
	NSDictionary* _propertyList;

}

@property (retain) ISPropertyListProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
-(void)dealloc;
-(void)run;
-(void)setDataProvider:(ISPropertyListProvider *)arg1 ;
-(ISPropertyListProvider *)dataProvider;
-(id)initWithPropertyList:(id)arg1 ;
@end

