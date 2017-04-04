// Copyright (c) 2011-2014 The Aureus Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef AUREUS_QT_AUREUSADDRESSVALIDATOR_H
#define AUREUS_QT_AUREUSADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class AureusAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit AureusAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Aureus address widget validator, checks for a valid aureus address.
 */
class AureusAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit AureusAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // AUREUS_QT_AUREUSADDRESSVALIDATOR_H
