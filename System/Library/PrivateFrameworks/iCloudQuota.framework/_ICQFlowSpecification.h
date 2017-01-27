/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _ICQPageSpecification, NSDictionary;

@interface _ICQFlowSpecification : NSObject {

	_ICQPageSpecification* _startPage;
	NSDictionary* _pagesByIdentifier;

}

@property (nonatomic,readonly) _ICQPageSpecification * startPage;              //@synthesize startPage=_startPage - In the implementation block
@property (nonatomic,readonly) NSDictionary * pagesByIdentifier;               //@synthesize pagesByIdentifier=_pagesByIdentifier - In the implementation block
-(_ICQPageSpecification *)startPage;
-(id)initWithPages:(id)arg1 ;
-(NSDictionary *)pagesByIdentifier;
@end

