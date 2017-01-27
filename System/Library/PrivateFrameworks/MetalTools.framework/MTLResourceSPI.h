/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MTLResourceAllocationInfo;


@protocol MTLResourceSPI <MTLResource>
@property (assign) int responsibleProcess; 
@property (readonly) MTLResourceAllocationInfo * sharedAllocationInfo; 
@property (readonly) MTLResourceAllocationInfo * cachedAllocationInfo; 
@required
-(BOOL)isPurgeable;
-(BOOL)doesAliasResource:(id)arg1;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1;
-(MTLResourceAllocationInfo *)sharedAllocationInfo;
-(MTLResourceAllocationInfo *)cachedAllocationInfo;
-(BOOL)isComplete;
-(void)waitUntilComplete;

@end

