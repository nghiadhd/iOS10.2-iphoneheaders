/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDPDataHarvester.h>

@class NSURL, NSString;

@interface _CDPSerializedDataHarvester : NSObject <_CDPDataHarvester> {

	NSURL* _url;

}

@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)loadWithLimit:(unsigned long long)arg1 dataPointReader:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

