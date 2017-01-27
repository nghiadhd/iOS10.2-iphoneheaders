/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDateFormatter, NSString;

@interface PLSearchIndexDateFormatter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSDateFormatter* _dateFormatter;
	NSString* _yearFormat;
	NSString* _monthFormat;
	NSString* _displayFormat;
	NSString* _parseFormat;
	BOOL _localeDidChange;

}
-(id)init;
-(void)dealloc;
-(void)_inqUpdateDateFormat:(id)arg1 ;
-(void)_inqSetupDateFormatter;
-(id)_inqNewLocalizedStringFromDate:(id)arg1 ;
-(id)newLocalizedStringFromYear:(id)arg1 month:(id)arg2 ;
-(id)newLocalizedComponentsFromDate:(id)arg1 includeMonth:(BOOL)arg2 ;
-(id)newLocalizedStringFromDate:(id)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
@end

