/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DResource.h>

@class TSCH3DShaderProgram;

@interface TSCH3DShaderResource : TSCH3DResource {

	TSCH3DShaderProgram* mProgram;

}

@property (nonatomic,readonly) TSCH3DShaderProgram * program; 
+(pair<TSCH3D::IteratorRange<const char *>, TSCH3D::IteratorRange<const char *> >)stringsFromBuffer:(id)arg1 ;
-(id)initWithCaching:(int)arg1 ;
-(IteratorRange<const char *>)resourceStringOfString:(id)arg1 ;
-(void)appendShaderResourceString:(IteratorRange<const char *>)arg1 toDataBuffer:(id)arg2 ;
-(id)initWithCaching:(int)arg1 version:(id)arg2 ;
-(void)dealloc;
-(id)get;
-(TSCH3DShaderProgram *)program;
@end

