/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WKInterfaceObject : NSObject {

	NSString* _interfaceProperty;
	NSString* _viewControllerID;
	NSString* _propertyIndex;
	long long _tableIndex;
	long long _rowIndex;

}

@property (nonatomic,copy) NSString * interfaceProperty;              //@synthesize interfaceProperty=_interfaceProperty - In the implementation block
@property (nonatomic,copy) NSString * viewControllerID;               //@synthesize viewControllerID=_viewControllerID - In the implementation block
@property (nonatomic,retain) NSString * propertyIndex;                //@synthesize propertyIndex=_propertyIndex - In the implementation block
@property (assign,nonatomic) long long tableIndex;                    //@synthesize tableIndex=_tableIndex - In the implementation block
@property (assign,nonatomic) long long rowIndex;                      //@synthesize rowIndex=_rowIndex - In the implementation block
-(id)init;
-(void)setAlpha:(double)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(long long)rowIndex;
-(void)setRotation:(double)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)setAccessibilityLabel:(id)arg1 ;
-(void)setAccessibilityValue:(id)arg1 ;
-(void)setAccessibilityHint:(id)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(void)setAccessibilityIdentifier:(id)arg1 ;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)setRowIndex:(long long)arg1 ;
-(void)setInterfaceProperty:(NSString *)arg1 ;
-(void)setViewControllerID:(NSString *)arg1 ;
-(void)setPropertyIndex:(NSString *)arg1 ;
-(void)setTableIndex:(long long)arg1 ;
-(void)_sendValueChanged:(id)arg1 forProperty:(id)arg2 ;
-(NSString *)propertyIndex;
-(long long)tableIndex;
-(NSString *)viewControllerID;
-(id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(long long)arg3 tableIndex:(long long)arg4 rowIndex:(long long)arg5 ;
-(void)_setupWithDescription:(id)arg1 forController:(id)arg2 ;
-(void)_setImage:(id)arg1 forProperty:(id)arg2 ;
-(void)_setImageData:(id)arg1 forProperty:(id)arg2 ;
-(void)_setImageNamed:(id)arg1 forProperty:(id)arg2 ;
-(void)_sendValueChanged:(id)arg1 ;
-(void)setRelativeWidth:(double)arg1 withAdjustment:(double)arg2 ;
-(void)setRelativeHeight:(double)arg1 withAdjustment:(double)arg2 ;
-(void)sizeToFitWidth;
-(void)sizeToFitHeight;
-(NSString *)interfaceProperty;
-(void)setAccessibilityImageRegions:(id)arg1 ;
@end

