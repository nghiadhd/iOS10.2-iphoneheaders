/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface TIAssetsForInputMode : NSObject {

	NSMutableDictionary* _assetsByInputModeLevel;
	NSString* _inputMode;

}

@property (nonatomic,readonly) NSString * inputMode;              //@synthesize inputMode=_inputMode - In the implementation block
-(void)dealloc;
-(id)recursiveDescription;
-(NSString *)inputMode;
-(id)assetsForType:(id)arg1 ;
-(id)assetContentItemsForInputModeLevels:(id)arg1 contentType:(id)arg2 ;
-(id)initWithInputMode:(id)arg1 ;
-(void)addAssetsForInputModeLevel:(id)arg1 ;
-(void)removeAllInputModeLevels;
@end

