/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObject.h>

@class MCAudioPlaylist, NSDictionary, MCPlug;

@interface MCContainer : MCObject {

	unsigned short mFlags;
	unsigned short mSpecialRetainCount;
	MCAudioPlaylist* mAudioPlaylist;
	NSDictionary* mInitialState;
	MCPlug* mReferencingPlug;

}

@property (readonly) MCAudioPlaylist * audioPlaylist; 
@property (readonly) MCAudioPlaylist * audioPlaylistCreateIfNeeded; 
@property (readonly) MCPlug * referencingPlug; 
@property (retain) NSDictionary * initialState; 
-(MCAudioPlaylist *)audioPlaylistCreateIfNeeded;
-(void)specialRelease;
-(id)specialRetain;
-(void)demolish;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(MCPlug *)referencingPlug;
-(void)referenceByPlug:(id)arg1 ;
-(void)unreferenceByPlug:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSDictionary *)initialState;
-(void)setInitialState:(NSDictionary *)arg1 ;
-(MCAudioPlaylist *)audioPlaylist;
-(id)imprint;
@end

