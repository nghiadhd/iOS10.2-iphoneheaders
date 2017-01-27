/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocomplete/_CNAutocompleteResponsePreparerDecorator.h>

@interface _CNFilteringResponsePreparer : _CNAutocompleteResponsePreparerDecorator {

	/*^block*/id _filter;

}

@property (copy,readonly) id filter;              //@synthesize filter=_filter - In the implementation block
-(id)prepareResults:(id)arg1 ;
-(id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2 filter:(/*^block*/id)arg3 ;
-(id)filter;
@end

