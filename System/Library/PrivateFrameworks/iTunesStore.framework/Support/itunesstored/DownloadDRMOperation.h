/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/FinishDownloadStepOperation.h>
#import <libobjc.A.dylib/ISOperationDelegate.h>

@class NSString;

@interface DownloadDRMOperation : FinishDownloadStepOperation <ISOperationDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_sinfs;
-(BOOL)_decryptAsset:(id*)arg1 ;
-(BOOL)_unprotectMediaAsset:(id*)arg1 ;
-(BOOL)_checkoutRentalKeys:(id*)arg1 ;
-(void)run;
-(void)operation:(id)arg1 updatedProgress:(id)arg2 ;
@end

