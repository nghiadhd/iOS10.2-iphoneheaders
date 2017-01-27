/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPPlaybackContext.h>

@class MusicClientContext, MusicEntityValueContext, NSArray;

@interface MusicStorePlaybackContext : MPPlaybackContext {

	MusicClientContext* _clientContext;
	MusicEntityValueContext* _containerEntityValueContext;
	NSArray* _items;

}

@property (nonatomic,retain) MusicClientContext * clientContext;                               //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) MusicEntityValueContext * containerEntityValueContext;              //@synthesize containerEntityValueContext=_containerEntityValueContext - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                    //@synthesize items=_items - In the implementation block
+(Class)queueFeederClass;
+(void)setDefaultClientContext:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)descriptionComponents;
-(id)initWithStoreIDs:(id)arg1 ;
-(void)setClientContext:(MusicClientContext *)arg1 ;
-(MusicClientContext *)clientContext;
-(void)setContainerEntityValueContext:(MusicEntityValueContext *)arg1 ;
-(MusicEntityValueContext *)containerEntityValueContext;
@end

