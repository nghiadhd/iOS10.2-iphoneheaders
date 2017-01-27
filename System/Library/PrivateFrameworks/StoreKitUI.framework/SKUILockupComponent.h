/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIPageComponent.h>

@class SKUIEditorialComponent, SKUIItem, SKUILockupViewElement;

@interface SKUILockupComponent : SKUIPageComponent {

	SKUIEditorialComponent* _editorial;
	SKUIItem* _item;
	long long _itemIdentifier;
	SKUILockupStyle _lockupStyle;

}

@property (nonatomic,readonly) SKUILockupViewElement * viewElement; 
@property (nonatomic,readonly) BOOL _needsItemData; 
@property (nonatomic,readonly) SKUIEditorialComponent * editorial;               //@synthesize editorial=_editorial - In the implementation block
@property (nonatomic,readonly) SKUIItem * item;                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) long long itemIdentifier;                         //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) SKUILockupStyle lockupStyle;                      //@synthesize lockupStyle=_lockupStyle - In the implementation block
-(SKUIItem *)item;
-(void)_setItem:(id)arg1 ;
-(long long)componentType;
-(long long)itemIdentifier;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(BOOL)_needsItemData;
-(id)initWithItem:(id)arg1 style:(SKUILockupStyle)arg2 ;
-(SKUIEditorialComponent *)editorial;
-(SKUILockupStyle)lockupStyle;
-(void)_setLockupStyle:(SKUILockupStyle)arg1 ;
-(id)initWithItemIdentifier:(long long)arg1 style:(SKUILockupStyle)arg2 ;
@end

