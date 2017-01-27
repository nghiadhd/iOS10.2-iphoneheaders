/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface PKImageSet : NSObject <NSSecureCoding> {

	NSURL* _originCacheURL;
	long long _version;

}

@property (nonatomic,copy) NSURL * originCacheURL;              //@synthesize originCacheURL=_originCacheURL - In the implementation block
@property (assign,nonatomic) long long version;                 //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)shouldCache;
+(unsigned)currentVersion;
+(id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 fileURL:(id)arg5 cacheURL:(id)arg6 ;
+(Class)classForDisplayProfile:(id)arg1 imageSetType:(long long)arg2 ;
+(long long)imageSetType;
+(id)createXPCContainerForImageSetWithType:(long long)arg1 displayProfile:(id)arg2 screenScale:(double)arg3 screenSize:(CGSize)arg4 suffix:(id)arg5 fileURL:(id)arg6 cacheURL:(id)arg7 ;
+(Class)classForImageSetType:(long long)arg1 ;
+(id)_createXPCContainerForImageSetWithType:(long long)arg1 displayProfile:(id)arg2 screenScale:(double)arg3 screenSize:(CGSize)arg4 suffix:(id)arg5 fileURL:(id)arg6 cacheURL:(id)arg7 imageSetOut:(id*)arg8 ;
+(id)_archiveURL:(id)arg1 ;
+(id)archiveName;
+(id)imageSetForType:(long long)arg1 displayProfile:(id)arg2 fileURL:(id)arg3 cacheURL:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)setOriginCacheURL:(NSURL *)arg1 ;
-(NSURL *)originCacheURL;
-(BOOL)_isSetImage:(id)arg1 equalToImage:(id)arg2 ;
-(void)preheatImages;
@end

