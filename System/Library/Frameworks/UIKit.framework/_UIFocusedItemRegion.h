/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusRegion.h>

@protocol UIFocusItem;
@interface _UIFocusedItemRegion : _UIFocusRegion {

	id<UIFocusItem> _item;

}

@property (nonatomic,__weak,readonly) id<UIFocusItem> item;              //@synthesize item=_item - In the implementation block
-(id)description;
-(id<UIFocusItem>)item;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFrame:(CGRect)arg1 item:(id)arg2 ;
-(BOOL)_shouldOccludeRegion:(id)arg1 ;
-(BOOL)_shouldBeOccludedByRegion:(id)arg1 ;
@end

