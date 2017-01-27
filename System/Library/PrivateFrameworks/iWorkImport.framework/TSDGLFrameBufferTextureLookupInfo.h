/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString;

@interface TSDGLFrameBufferTextureLookupInfo : NSObject {

	unsigned _attachment;
	unsigned _textureName;
	long long _indexOnAttachment;
	NSString* _name;
	CGSize _textureSize;

}

@property (assign,nonatomic) unsigned attachment;                      //@synthesize attachment=_attachment - In the implementation block
@property (assign,nonatomic) long long indexOnAttachment;              //@synthesize indexOnAttachment=_indexOnAttachment - In the implementation block
@property (nonatomic,readonly) unsigned textureName;                   //@synthesize textureName=_textureName - In the implementation block
@property (nonatomic,readonly) CGSize textureSize;                     //@synthesize textureSize=_textureSize - In the implementation block
@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
+(id)textureLookupInfoWithAttachment:(unsigned)arg1 indexOnAttachment:(long long)arg2 textureName:(unsigned)arg3 textureSize:(CGSize)arg4 name:(id)arg5 ;
-(id)initWithAttachment:(unsigned)arg1 indexOnAttachment:(long long)arg2 textureName:(unsigned)arg3 textureSize:(CGSize)arg4 name:(id)arg5 ;
-(long long)indexOnAttachment;
-(void)setIndexOnAttachment:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)setAttachment:(unsigned)arg1 ;
-(unsigned)attachment;
-(CGSize)textureSize;
-(unsigned)textureName;
@end

