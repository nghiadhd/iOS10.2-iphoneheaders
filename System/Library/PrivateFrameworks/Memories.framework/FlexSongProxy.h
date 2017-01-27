/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/FlexSongProtocol.h>

@class UIImage, NSString, NSSet, NSArray;

@interface FlexSongProxy : NSObject <FlexSongProtocol> {

	UIImage* _artwork;
	NSString* _uid;
	NSString* _songName;
	NSString* _artistName;
	NSSet* _tagIDs;
	NSArray* _assets;
	NSString* _audioEncoderPresetName;

}

@property (nonatomic,readonly) NSString * uid;                                 //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) NSString * songName;                            //@synthesize songName=_songName - In the implementation block
@property (nonatomic,readonly) NSString * artistName;                          //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) NSSet * tagIDs;                                 //@synthesize tagIDs=_tagIDs - In the implementation block
@property (nonatomic,readonly) NSArray * assets;                               //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) UIImage * artwork;                              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) NSString * audioEncoderPresetName;              //@synthesize audioEncoderPresetName=_audioEncoderPresetName - In the implementation block
-(long long)sampleRate;
-(NSString *)uid;
-(UIImage *)artwork;
-(NSString *)artistName;
-(NSArray *)assets;
-(NSString *)songName;
-(id)assetWithID:(id)arg1 ;
-(BOOL)canPlay;
-(SCD_Struct_Mi1)naturalDuration;
-(NSSet *)tagIDs;
-(NSString *)audioEncoderPresetName;
-(void)updateAssets:(id)arg1 ;
-(id)renditionForDuration:(SCD_Struct_Mi1)arg1 withOptions:(id)arg2 usePreRenderedFades:(BOOL)arg3 testingContext:(id)arg4 ;
-(id)initWithUID:(id)arg1 songName:(id)arg2 artistName:(id)arg3 tagIDs:(id)arg4 assets:(id)arg5 audioEncoderPresetName:(id)arg6 ;
-(id)_loadArtworkImage;
@end

