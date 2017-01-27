/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIProgressIndicatorViewElement;

@interface SKUICarouselViewElement : SKUIViewElement {

	double _displayInterval;

}

@property (nonatomic,readonly) double displayInterval;                                                   //@synthesize displayInterval=_displayInterval - In the implementation block
@property (nonatomic,readonly) SKUIProgressIndicatorViewElement * progressIndicatorElement; 
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(double)displayInterval;
-(SKUIProgressIndicatorViewElement *)progressIndicatorElement;
@end

