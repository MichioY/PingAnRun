//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface PHGetAddressBookMethod : NSObject
{
    NSArray *_titleArr;
    NSMutableArray *_contactsDatas;
    NSMutableArray *_shouzimuArry;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *shouzimuArry; // @synthesize shouzimuArry=_shouzimuArry;
@property(retain, nonatomic) NSMutableArray *contactsDatas; // @synthesize contactsDatas=_contactsDatas;
@property(retain, nonatomic) NSArray *titleArr; // @synthesize titleArr=_titleArr;
- (void).cxx_destruct;
- (id)nameForABMultiValue:(void *)arg1;
- (id)splicePhoneNum:(id)arg1;
- (id)getAllAddressBookStr;
- (id)initialArr;
- (id)groupByAddressBook;
- (id)searchFromAddressBook:(id)arg1;
- (id)getContactsData;
- (id)getContactsDatas;

@end
