/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSString, AXReplayableGesture, NSUUID;

@interface AXSwitchRecipeMapping : NSObject {

	BOOL _optional;
	NSString* _action;
	NSString* _longPressAction;
	AXReplayableGesture* _gesture;
	AXReplayableGesture* _longPressGesture;
	NSUUID* _switchUUID;
	long long _switchOriginalAction;
	CGPoint _holdPoint;

}

@property (nonatomic,copy) NSString * action;                                     //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * longPressAction;                            //@synthesize longPressAction=_longPressAction - In the implementation block
@property (nonatomic,retain) AXReplayableGesture * gesture;                       //@synthesize gesture=_gesture - In the implementation block
@property (nonatomic,retain) AXReplayableGesture * longPressGesture;              //@synthesize longPressGesture=_longPressGesture - In the implementation block
@property (assign,nonatomic) CGPoint holdPoint;                                   //@synthesize holdPoint=_holdPoint - In the implementation block
@property (assign,getter=isOptional,nonatomic) BOOL optional;                     //@synthesize optional=_optional - In the implementation block
@property (nonatomic,copy) NSUUID * switchUUID;                                   //@synthesize switchUUID=_switchUUID - In the implementation block
@property (assign,nonatomic) long long switchOriginalAction;                      //@synthesize switchOriginalAction=_switchOriginalAction - In the implementation block
+(id)recipeMappingWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isOptional;
-(void)setOptional:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)longPressAction;
-(id)dictionaryRepresentation;
-(void)setLongPressAction:(NSString *)arg1 ;
-(void)setGesture:(AXReplayableGesture *)arg1 ;
-(void)setLongPressGesture:(AXReplayableGesture *)arg1 ;
-(void)setHoldPoint:(CGPoint)arg1 ;
-(void)setSwitchUUID:(NSUUID *)arg1 ;
-(void)setSwitchOriginalAction:(long long)arg1 ;
-(AXReplayableGesture *)gesture;
-(CGPoint)holdPoint;
-(AXReplayableGesture *)longPressGesture;
-(NSUUID *)switchUUID;
-(long long)switchOriginalAction;
@end

