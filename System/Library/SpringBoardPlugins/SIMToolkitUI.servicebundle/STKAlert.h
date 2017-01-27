/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/SIMToolkitUI.servicebundle/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SIMToolkitUI/SIMToolkitUI-Structs.h>
@class NSString, TLAlert, NSDictionary;

@interface STKAlert : NSObject {

	BOOL _needsResponse;
	NSString* _tone;
	TLAlert* _toneAlert;
	NSDictionary* _options;
	NSString* _type;

}

@property (nonatomic,copy) NSString * type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL needsResponse;                  //@synthesize needsResponse=_needsResponse - In the implementation block
-(void)dealloc;
-(void)sendResponse:(CFStringRef)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)phoneNumber;
-(id)initWithType:(id)arg1 andOptions:(id)arg2 ;
-(BOOL)oneShotInputEntry;
-(BOOL)dismissesAfterNextEvent;
-(BOOL)needsResponse;
-(void)setNeedsResponse:(BOOL)arg1 ;
-(CFStringRef)displayTextPriority;
-(void)playTone;
-(void)sendResponse:(CFStringRef)arg1 withString:(id)arg2 ;
-(CFStringRef)callPriority;
-(BOOL)sendResponseUponDisplay;
-(void)stopTone;
-(void)_stopToneAlert;
-(unsigned)_soundIDForTone:(CFStringRef)arg1 ;
-(void)_stopTone:(id)arg1 ;
-(void)_playTone:(CFStringRef)arg1 forDuration:(float)arg2 ;
-(void)sendResponse:(CFStringRef)arg1 withBool:(BOOL)arg2 ;
-(CFStringRef)toolkitAlertType;
-(BOOL)shouldRedial;
-(id)inCallText;
@end

