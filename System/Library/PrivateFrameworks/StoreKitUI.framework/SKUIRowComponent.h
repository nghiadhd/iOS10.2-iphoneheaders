/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class UIColor, NSArray, SKUIRowViewElement;

@interface SKUIRowComponent : SKUIPageComponent {

	UIColor* _backgroundColor;
	NSArray* _childComponents;
	NSArray* _columnWidths;
	long long _missingItemCount;
	long long _numberOfColumns;
	BOOL _shouldAutoFlow;

}

@property (nonatomic,readonly) SKUIRowViewElement * viewElement; 
@property (nonatomic,readonly) UIColor * backgroundColor;                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) NSArray * childComponents;                     //@synthesize childComponents=_childComponents - In the implementation block
@property (nonatomic,readonly) NSArray * columnWidths;                        //@synthesize columnWidths=_columnWidths - In the implementation block
@property (nonatomic,readonly) long long numberOfColumns;                     //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,readonly) BOOL shouldAutoFlow;                           //@synthesize shouldAutoFlow=_shouldAutoFlow - In the implementation block
-(UIColor *)backgroundColor;
-(id)description;
-(long long)numberOfColumns;
-(NSArray *)columnWidths;
-(long long)componentType;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isMissingItemData;
-(id)metricsElementName;
-(id)_updateWithMissingItems:(id)arg1 ;
-(id)_childComponentWithContext:(id)arg1 ;
-(BOOL)_isChildMissingItemData:(id)arg1 ;
-(NSArray *)childComponents;
-(BOOL)shouldAutoFlow;
@end

