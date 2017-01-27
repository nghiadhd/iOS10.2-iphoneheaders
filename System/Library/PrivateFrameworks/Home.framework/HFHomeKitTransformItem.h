/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFTransformItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@class NSString;

@interface HFHomeKitTransformItem : HFTransformItem <HFHomeKitItemProtocol>

@property (nonatomic,readonly) HFItem*<HFHomeKitItemProtocol> sourceHomeKitItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id<HFHomeKitObject>)homeKitObject;
-(HFItem*<HFHomeKitItemProtocol>)sourceHomeKitItem;
@end

