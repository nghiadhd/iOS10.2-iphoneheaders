/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ServerDocsProtocol/DCCachedFile.h>

@class DCCachedItem;

@interface DCCachedThumbnail : DCCachedFile {

	DCCachedItem* _underlyingItem;

}

@property (retain,readonly) DCCachedItem * underlyingItem;              //@synthesize underlyingItem=_underlyingItem - In the implementation block
-(id)contents;
-(id)fullPath;
-(id)_directoryPath;
-(id)parentContentsMetadata;
-(DCCachedItem *)underlyingItem;
-(id)_contentsFullPath;
-(id)_localGenerationIdentifierFullPath;
-(id)_localGenerationIdentifier;
-(id)initWithUnderlyingItem:(id)arg1 ;
@end

