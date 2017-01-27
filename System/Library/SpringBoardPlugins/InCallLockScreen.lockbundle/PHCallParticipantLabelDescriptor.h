/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/InCallLockScreen.lockbundle/InCallLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface PHCallParticipantLabelDescriptor : NSObject {

	BOOL _dynamic;
	NSArray* _strings;
	NSString* _secondaryString;
	unsigned long long _layoutState;

}

@property (nonatomic,retain) NSArray * strings;                           //@synthesize strings=_strings - In the implementation block
@property (nonatomic,retain) NSString * secondaryString;                  //@synthesize secondaryString=_secondaryString - In the implementation block
@property (assign,nonatomic) unsigned long long layoutState;              //@synthesize layoutState=_layoutState - In the implementation block
@property (assign,getter=isDynamic,nonatomic) BOOL dynamic;               //@synthesize dynamic=_dynamic - In the implementation block
+(id)labelDescriptorWithStringsForCall:(id)arg1 callCount:(long long)arg2 callCenter:(id)arg3 metadataClientController:(id)arg4 ;
+(id)labelDescriptorWithArray:(id)arg1 ;
+(id)labelDescriptorWithFormat:(id)arg1 ;
+(id)organizationNameForCall:(id)arg1 ;
+(id)labelDescriptorWithStringsForCall:(id)arg1 callCount:(long long)arg2 ;
+(id)labelDescriptorWithArray:(id)arg1 secondaryString:(id)arg2 layoutState:(unsigned long long)arg3 ;
-(NSArray *)strings;
-(void)setStrings:(NSArray *)arg1 ;
-(void)setDynamic:(BOOL)arg1 ;
-(unsigned long long)layoutState;
-(void)setLayoutState:(unsigned long long)arg1 ;
-(BOOL)isDynamic;
-(void)setSecondaryString:(NSString *)arg1 ;
-(NSString *)secondaryString;
@end

