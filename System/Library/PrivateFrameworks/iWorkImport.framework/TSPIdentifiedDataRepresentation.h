/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPIdentifiedDataRepresentation <NSObject>
@optional
-(void)setFileStateIdentifier:(id)arg1;
-(BOOL)fromExternalReference;
-(void)setRelativeDataPath:(id)arg1;

@required
-(BOOL)setDataRepresentation:(id)arg1 shouldCopy:(BOOL)arg2 error:(id*)arg3;
-(long long)identifier;
-(BOOL)isLoaded;

@end

