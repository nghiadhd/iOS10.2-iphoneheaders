/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOEditionEntry : NSObject {

	unsigned _tileset;
	unsigned _edition;
	unsigned _provider;
	BOOL _invalidateOnly;

}

@property (assign) unsigned tileset;                 //@synthesize tileset=_tileset - In the implementation block
@property (assign) unsigned edition;                 //@synthesize edition=_edition - In the implementation block
@property (assign) unsigned provider;                //@synthesize provider=_provider - In the implementation block
@property (assign) BOOL invalidateOnly;              //@synthesize invalidateOnly=_invalidateOnly - In the implementation block
-(unsigned)edition;
-(unsigned)provider;
-(void)setProvider:(unsigned)arg1 ;
-(unsigned)tileset;
-(void)setTileset:(unsigned)arg1 ;
-(void)setEdition:(unsigned)arg1 ;
-(BOOL)invalidateOnly;
-(void)setInvalidateOnly:(BOOL)arg1 ;
@end

