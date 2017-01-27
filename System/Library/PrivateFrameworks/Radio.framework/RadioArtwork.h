/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface RadioArtwork : NSObject <NSCopying> {

	NSURL* _URL;
	CGSize _pixelSize;

}

@property (nonatomic,readonly) CGSize pixelSize;              //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,readonly) CGSize pointSize; 
@property (nonatomic,readonly) NSURL * URL;                   //@synthesize URL=_URL - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(CGSize)pointSize;
-(id)initWithArtworkDictionary:(id)arg1 ;
-(CGSize)pixelSize;
-(id)initWithArtworkURL:(id)arg1 pixelSize:(CGSize)arg2 ;
@end

